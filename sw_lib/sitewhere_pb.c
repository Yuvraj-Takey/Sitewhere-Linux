/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.7 at Thu Nov 03 17:30:29 2016. */

#include "sitewhere_pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Model_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t Model_Metadata_fields[3] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, Model_Metadata, name, name, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, Model_Metadata, value, name, 0),
    PB_LAST_FIELD
};

const pb_field_t Model_DeviceLocation_fields[8] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, Model_DeviceLocation, hardwareId, hardwareId, 0),
    PB_FIELD(  2, FIXED64 , REQUIRED, STATIC  , OTHER, Model_DeviceLocation, latitude, hardwareId, 0),
    PB_FIELD(  3, FIXED64 , REQUIRED, STATIC  , OTHER, Model_DeviceLocation, longitude, latitude, 0),
    PB_FIELD(  4, FIXED64 , OPTIONAL, STATIC  , OTHER, Model_DeviceLocation, elevation, longitude, 0),
    PB_FIELD(  5, FIXED64 , OPTIONAL, STATIC  , OTHER, Model_DeviceLocation, eventDate, elevation, 0),
    PB_FIELD(  6, MESSAGE , REPEATED, STATIC  , OTHER, Model_DeviceLocation, metadata, eventDate, &Model_Metadata_fields),
    PB_FIELD(  7, BOOL    , OPTIONAL, STATIC  , OTHER, Model_DeviceLocation, updateState, metadata, 0),
    PB_LAST_FIELD
};

const pb_field_t Model_DeviceAlert_fields[7] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, Model_DeviceAlert, hardwareId, hardwareId, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, Model_DeviceAlert, alertType, hardwareId, 0),
    PB_FIELD(  3, STRING  , REQUIRED, STATIC  , OTHER, Model_DeviceAlert, alertMessage, alertType, 0),
    PB_FIELD(  4, FIXED64 , OPTIONAL, STATIC  , OTHER, Model_DeviceAlert, eventDate, alertMessage, 0),
    PB_FIELD(  5, MESSAGE , REPEATED, STATIC  , OTHER, Model_DeviceAlert, metadata, eventDate, &Model_Metadata_fields),
    PB_FIELD(  6, BOOL    , OPTIONAL, STATIC  , OTHER, Model_DeviceAlert, updateState, metadata, 0),
    PB_LAST_FIELD
};

const pb_field_t Model_Measurement_fields[3] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, Model_Measurement, measurementId, measurementId, 0),
    PB_FIELD(  2, FIXED64 , REQUIRED, STATIC  , OTHER, Model_Measurement, measurementValue, measurementId, 0),
    PB_LAST_FIELD
};

const pb_field_t Model_DeviceMeasurements_fields[6] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, Model_DeviceMeasurements, hardwareId, hardwareId, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, STATIC  , OTHER, Model_DeviceMeasurements, measurement, hardwareId, &Model_Measurement_fields),
    PB_FIELD(  3, FIXED64 , OPTIONAL, STATIC  , OTHER, Model_DeviceMeasurements, eventDate, measurement, 0),
    PB_FIELD(  4, MESSAGE , REPEATED, STATIC  , OTHER, Model_DeviceMeasurements, metadata, eventDate, &Model_Metadata_fields),
    PB_FIELD(  5, BOOL    , OPTIONAL, STATIC  , OTHER, Model_DeviceMeasurements, updateState, metadata, 0),
    PB_LAST_FIELD
};

const pb_field_t Model_DeviceStream_fields[5] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, Model_DeviceStream, hardwareId, hardwareId, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, Model_DeviceStream, streamId, hardwareId, 0),
    PB_FIELD(  3, STRING  , REQUIRED, STATIC  , OTHER, Model_DeviceStream, contentType, streamId, 0),
    PB_FIELD(  4, MESSAGE , REPEATED, STATIC  , OTHER, Model_DeviceStream, metadata, contentType, &Model_Metadata_fields),
    PB_LAST_FIELD
};

const pb_field_t Model_DeviceStreamData_fields[7] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, Model_DeviceStreamData, hardwareId, hardwareId, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, Model_DeviceStreamData, streamId, hardwareId, 0),
    PB_FIELD(  3, FIXED64 , REQUIRED, STATIC  , OTHER, Model_DeviceStreamData, sequenceNumber, streamId, 0),
    PB_FIELD(  4, BYTES   , REQUIRED, CALLBACK, OTHER, Model_DeviceStreamData, data, sequenceNumber, 0),
    PB_FIELD(  5, FIXED64 , OPTIONAL, STATIC  , OTHER, Model_DeviceStreamData, eventDate, data, 0),
    PB_FIELD(  6, MESSAGE , REPEATED, STATIC  , OTHER, Model_DeviceStreamData, metadata, eventDate, &Model_Metadata_fields),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_Header_fields[3] = {
    PB_FIELD(  1, UENUM   , REQUIRED, STATIC  , FIRST, SiteWhere_Header, command, command, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, SiteWhere_Header, originator, command, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_RegisterDevice_fields[5] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_RegisterDevice, hardwareId, hardwareId, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_RegisterDevice, specificationToken, hardwareId, 0),
    PB_FIELD(  3, MESSAGE , REPEATED, CALLBACK, OTHER, SiteWhere_RegisterDevice, metadata, specificationToken, &Model_Metadata_fields),
    PB_FIELD(  4, STRING  , OPTIONAL, STATIC  , OTHER, SiteWhere_RegisterDevice, siteToken, metadata, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_Acknowledge_fields[3] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_Acknowledge, hardwareId, hardwareId, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, SiteWhere_Acknowledge, message, hardwareId, 0),
    PB_LAST_FIELD
};

const pb_field_t SiteWhere_DeviceStreamDataRequest_fields[4] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, SiteWhere_DeviceStreamDataRequest, hardwareId, hardwareId, 0),
    PB_FIELD(  2, STRING  , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceStreamDataRequest, streamId, hardwareId, 0),
    PB_FIELD(  3, FIXED64 , REQUIRED, STATIC  , OTHER, SiteWhere_DeviceStreamDataRequest, sequenceNumber, streamId, 0),
    PB_LAST_FIELD
};

const pb_field_t Device_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t Device_Header_fields[5] = {
    PB_FIELD(  1, UENUM   , REQUIRED, STATIC  , FIRST, Device_Header, command, command, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, Device_Header, originator, command, 0),
    PB_FIELD(  3, STRING  , OPTIONAL, STATIC  , OTHER, Device_Header, nestedPath, originator, 0),
    PB_FIELD(  4, STRING  , OPTIONAL, STATIC  , OTHER, Device_Header, nestedSpec, nestedPath, 0),
    PB_LAST_FIELD
};

const pb_field_t Device_RegistrationAck_fields[4] = {
    PB_FIELD(  1, UENUM   , REQUIRED, STATIC  , FIRST, Device_RegistrationAck, state, state, 0),
    PB_FIELD(  2, UENUM   , OPTIONAL, STATIC  , OTHER, Device_RegistrationAck, errorType, state, 0),
    PB_FIELD(  3, STRING  , OPTIONAL, STATIC  , OTHER, Device_RegistrationAck, errorMessage, errorType, 0),
    PB_LAST_FIELD
};

const pb_field_t Device_DeviceStreamAck_fields[3] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, Device_DeviceStreamAck, streamId, streamId, 0),
    PB_FIELD(  2, UENUM   , REQUIRED, STATIC  , OTHER, Device_DeviceStreamAck, state, streamId, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(Model_DeviceLocation, metadata[0]) < 65536 && pb_membersize(Model_DeviceAlert, metadata[0]) < 65536 && pb_membersize(Model_DeviceMeasurements, measurement[0]) < 65536 && pb_membersize(Model_DeviceMeasurements, metadata[0]) < 65536 && pb_membersize(Model_DeviceStream, metadata[0]) < 65536 && pb_membersize(Model_DeviceStreamData, metadata[0]) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_Model_Model_Metadata_Model_DeviceLocation_Model_DeviceAlert_Model_Measurement_Model_DeviceMeasurements_Model_DeviceStream_Model_DeviceStreamData_SiteWhere_SiteWhere_Header_SiteWhere_RegisterDevice_SiteWhere_Acknowledge_SiteWhere_DeviceStreamDataRequest_Device_Device_Header_Device_RegistrationAck_Device_DeviceStreamAck)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(Model_DeviceLocation, metadata[0]) < 256 && pb_membersize(Model_DeviceAlert, metadata[0]) < 256 && pb_membersize(Model_DeviceMeasurements, measurement[0]) < 256 && pb_membersize(Model_DeviceMeasurements, metadata[0]) < 256 && pb_membersize(Model_DeviceStream, metadata[0]) < 256 && pb_membersize(Model_DeviceStreamData, metadata[0]) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_Model_Model_Metadata_Model_DeviceLocation_Model_DeviceAlert_Model_Measurement_Model_DeviceMeasurements_Model_DeviceStream_Model_DeviceStreamData_SiteWhere_SiteWhere_Header_SiteWhere_RegisterDevice_SiteWhere_Acknowledge_SiteWhere_DeviceStreamDataRequest_Device_Device_Header_Device_RegistrationAck_Device_DeviceStreamAck)
#endif


/* @@protoc_insertion_point(eof) */
