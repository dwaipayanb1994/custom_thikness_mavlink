#pragma once
// MESSAGE THICKNESS_GAUGE_READING PACKING

#define MAVLINK_MSG_ID_THICKNESS_GAUGE_READING 11045


typedef struct __mavlink_thickness_gauge_reading_t {
 float thickness; /*< [mm] Thickness measured by gauge.*/
} mavlink_thickness_gauge_reading_t;

#define MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN 4
#define MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_MIN_LEN 4
#define MAVLINK_MSG_ID_11045_LEN 4
#define MAVLINK_MSG_ID_11045_MIN_LEN 4

#define MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_CRC 196
#define MAVLINK_MSG_ID_11045_CRC 196



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_THICKNESS_GAUGE_READING { \
    11045, \
    "THICKNESS_GAUGE_READING", \
    1, \
    {  { "thickness", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_thickness_gauge_reading_t, thickness) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_THICKNESS_GAUGE_READING { \
    "THICKNESS_GAUGE_READING", \
    1, \
    {  { "thickness", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_thickness_gauge_reading_t, thickness) }, \
         } \
}
#endif

/**
 * @brief Pack a thickness_gauge_reading message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param thickness [mm] Thickness measured by gauge.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_thickness_gauge_reading_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN];
    _mav_put_float(buf, 0, thickness);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN);
#else
    mavlink_thickness_gauge_reading_t packet;
    packet.thickness = thickness;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_THICKNESS_GAUGE_READING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_MIN_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_CRC);
}

/**
 * @brief Pack a thickness_gauge_reading message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param thickness [mm] Thickness measured by gauge.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_thickness_gauge_reading_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN];
    _mav_put_float(buf, 0, thickness);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN);
#else
    mavlink_thickness_gauge_reading_t packet;
    packet.thickness = thickness;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_THICKNESS_GAUGE_READING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_MIN_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_CRC);
}

/**
 * @brief Encode a thickness_gauge_reading struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param thickness_gauge_reading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_thickness_gauge_reading_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_thickness_gauge_reading_t* thickness_gauge_reading)
{
    return mavlink_msg_thickness_gauge_reading_pack(system_id, component_id, msg, thickness_gauge_reading->thickness);
}

/**
 * @brief Encode a thickness_gauge_reading struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param thickness_gauge_reading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_thickness_gauge_reading_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_thickness_gauge_reading_t* thickness_gauge_reading)
{
    return mavlink_msg_thickness_gauge_reading_pack_chan(system_id, component_id, chan, msg, thickness_gauge_reading->thickness);
}

/**
 * @brief Send a thickness_gauge_reading message
 * @param chan MAVLink channel to send the message
 *
 * @param thickness [mm] Thickness measured by gauge.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_thickness_gauge_reading_send(mavlink_channel_t chan, float thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN];
    _mav_put_float(buf, 0, thickness);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING, buf, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_MIN_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_CRC);
#else
    mavlink_thickness_gauge_reading_t packet;
    packet.thickness = thickness;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING, (const char *)&packet, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_MIN_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_CRC);
#endif
}

/**
 * @brief Send a thickness_gauge_reading message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_thickness_gauge_reading_send_struct(mavlink_channel_t chan, const mavlink_thickness_gauge_reading_t* thickness_gauge_reading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_thickness_gauge_reading_send(chan, thickness_gauge_reading->thickness);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING, (const char *)thickness_gauge_reading, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_MIN_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_CRC);
#endif
}

#if MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_thickness_gauge_reading_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, thickness);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING, buf, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_MIN_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_CRC);
#else
    mavlink_thickness_gauge_reading_t *packet = (mavlink_thickness_gauge_reading_t *)msgbuf;
    packet->thickness = thickness;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING, (const char *)packet, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_MIN_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_CRC);
#endif
}
#endif

#endif

// MESSAGE THICKNESS_GAUGE_READING UNPACKING


/**
 * @brief Get field thickness from thickness_gauge_reading message
 *
 * @return [mm] Thickness measured by gauge.
 */
static inline float mavlink_msg_thickness_gauge_reading_get_thickness(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a thickness_gauge_reading message into a struct
 *
 * @param msg The message to decode
 * @param thickness_gauge_reading C-struct to decode the message contents into
 */
static inline void mavlink_msg_thickness_gauge_reading_decode(const mavlink_message_t* msg, mavlink_thickness_gauge_reading_t* thickness_gauge_reading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    thickness_gauge_reading->thickness = mavlink_msg_thickness_gauge_reading_get_thickness(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN? msg->len : MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN;
        memset(thickness_gauge_reading, 0, MAVLINK_MSG_ID_THICKNESS_GAUGE_READING_LEN);
    memcpy(thickness_gauge_reading, _MAV_PAYLOAD(msg), len);
#endif
}
