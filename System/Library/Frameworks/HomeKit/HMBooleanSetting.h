//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMBooleanSetting
{
    _Bool _boolValue;	// 8 = 0x8
}

@property(readonly) _Bool boolValue; // @synthesize boolValue=_boolValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fb826
- (id)attributeDescriptions;	// IMP=0x00000000001fb6f7
- (id)initWithKeyPath:(id)arg1 readOnly:(_Bool)arg2 payload:(id)arg3;	// IMP=0x00000000001fb560
- (id)payloadCopy;	// IMP=0x00000000001fb40c
- (id)protoPayload;	// IMP=0x00000000001fb2de
- (id)initWithProtoPayload:(id)arg1;	// IMP=0x00000000001fafc4
- (id)settingValue;	// IMP=0x00000000001faf72
- (id)settingWithSettingValue:(id)arg1;	// IMP=0x00000000001fae8c
- (id)initWithKeyPath:(id)arg1 readOnly:(_Bool)arg2 boolValue:(_Bool)arg3;	// IMP=0x00000000001fae49

@end

