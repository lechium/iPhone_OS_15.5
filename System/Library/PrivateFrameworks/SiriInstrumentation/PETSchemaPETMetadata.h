//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface PETSchemaPETMetadata
{
    unsigned long long _upload_time;	// 8 = 0x8
    NSString *_platform;	// 16 = 0x10
    NSString *_device;	// 24 = 0x18
    NSString *_build;	// 32 = 0x20
    _Bool _is_internal;	// 40 = 0x28
    _Bool _is_seed;	// 41 = 0x29
    _Bool _is_gm;	// 42 = 0x2a
    NSString *_country;	// 48 = 0x30
    NSString *_language;	// 56 = 0x38
    unsigned int _config_version;	// 64 = 0x40
    NSString *_pseudo_device_id;	// 72 = 0x48
    _Bool _is_internal_carry;	// 80 = 0x50
    _Bool _is_config_enabled;	// 81 = 0x51
    NSString *_message_group;	// 88 = 0x58
    NSString *_msg_type;	// 96 = 0x60
    _Bool _is_testing_data;	// 104 = 0x68
    _Bool _is_trial_upload;	// 105 = 0x69
    struct {
        unsigned int upload_time:1;
        unsigned int is_internal:1;
        unsigned int is_seed:1;
        unsigned int is_gm:1;
        unsigned int config_version:1;
        unsigned int is_internal_carry:1;
        unsigned int is_config_enabled:1;
        unsigned int is_testing_data:1;
        unsigned int is_trial_upload:1;
    } _has;	// 108 = 0x6c
    _Bool _hasPlatform;	// 112 = 0x70
    _Bool _hasDevice;	// 113 = 0x71
    _Bool _hasBuild;	// 114 = 0x72
    _Bool _hasCountry;	// 115 = 0x73
    _Bool _hasLanguage;	// 116 = 0x74
    _Bool _hasPseudo_device_id;	// 117 = 0x75
    _Bool _hasMessage_group;	// 118 = 0x76
    _Bool _hasMsg_type;	// 119 = 0x77
}

- (void).cxx_destruct;	// IMP=0x00000000002949a9
@property(nonatomic) _Bool hasMsg_type; // @synthesize hasMsg_type=_hasMsg_type;
@property(nonatomic) _Bool hasMessage_group; // @synthesize hasMessage_group=_hasMessage_group;
@property(nonatomic) _Bool hasPseudo_device_id; // @synthesize hasPseudo_device_id=_hasPseudo_device_id;
@property(nonatomic) _Bool hasLanguage; // @synthesize hasLanguage=_hasLanguage;
@property(nonatomic) _Bool hasCountry; // @synthesize hasCountry=_hasCountry;
@property(nonatomic) _Bool hasBuild; // @synthesize hasBuild=_hasBuild;
@property(nonatomic) _Bool hasDevice; // @synthesize hasDevice=_hasDevice;
@property(nonatomic) _Bool hasPlatform; // @synthesize hasPlatform=_hasPlatform;
@property(nonatomic) _Bool is_trial_upload; // @synthesize is_trial_upload=_is_trial_upload;
@property(nonatomic) _Bool is_testing_data; // @synthesize is_testing_data=_is_testing_data;
@property(copy, nonatomic) NSString *msg_type; // @synthesize msg_type=_msg_type;
@property(copy, nonatomic) NSString *message_group; // @synthesize message_group=_message_group;
@property(nonatomic) _Bool is_config_enabled; // @synthesize is_config_enabled=_is_config_enabled;
@property(nonatomic) _Bool is_internal_carry; // @synthesize is_internal_carry=_is_internal_carry;
@property(copy, nonatomic) NSString *pseudo_device_id; // @synthesize pseudo_device_id=_pseudo_device_id;
@property(nonatomic) unsigned int config_version; // @synthesize config_version=_config_version;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) _Bool is_gm; // @synthesize is_gm=_is_gm;
@property(nonatomic) _Bool is_seed; // @synthesize is_seed=_is_seed;
@property(nonatomic) _Bool is_internal; // @synthesize is_internal=_is_internal;
@property(copy, nonatomic) NSString *build; // @synthesize build=_build;
@property(copy, nonatomic) NSString *device; // @synthesize device=_device;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned long long upload_time; // @synthesize upload_time=_upload_time;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000293f77
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000293eb9
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000293719
- (unsigned long long)hash;	// IMP=0x0000000000293472
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002928f0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000292588
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000291d37
- (void)deleteIs_trial_upload;	// IMP=0x0000000000291d0c
@property(nonatomic) _Bool hasIs_trial_upload;
- (void)deleteIs_testing_data;	// IMP=0x0000000000291c95
@property(nonatomic) _Bool hasIs_testing_data;
- (void)deleteMsg_type;	// IMP=0x0000000000291c35
- (void)deleteMessage_group;	// IMP=0x0000000000291c0c
- (void)deleteIs_config_enabled;	// IMP=0x0000000000291bcd
@property(nonatomic) _Bool hasIs_config_enabled;
- (void)deleteIs_internal_carry;	// IMP=0x0000000000291b57
@property(nonatomic) _Bool hasIs_internal_carry;
- (void)deletePseudo_device_id;	// IMP=0x0000000000291af7
- (void)deleteConfig_version;	// IMP=0x0000000000291ab8
@property(nonatomic) _Bool hasConfig_version;
- (void)deleteLanguage;	// IMP=0x0000000000291a58
- (void)deleteCountry;	// IMP=0x0000000000291a2f
- (void)deleteIs_gm;	// IMP=0x00000000002919f0
@property(nonatomic) _Bool hasIs_gm;
- (void)deleteIs_seed;	// IMP=0x000000000029197c
@property(nonatomic) _Bool hasIs_seed;
- (void)deleteIs_internal;	// IMP=0x0000000000291908
@property(nonatomic) _Bool hasIs_internal;
- (void)deleteBuild;	// IMP=0x00000000002918ab
- (void)deleteDevice;	// IMP=0x0000000000291882
- (void)deletePlatform;	// IMP=0x0000000000291859
- (void)deleteUpload_time;	// IMP=0x000000000029181a
@property(nonatomic) _Bool hasUpload_time;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003565cb

@end

