//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMSettingBooleanValue
{
    _Bool _boolValue;	// 8 = 0x8
}

@property(readonly) _Bool boolValue; // @synthesize boolValue=_boolValue;
- (unsigned long long)hash;	// IMP=0x00000000000143a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014304
- (id)attributeDescriptions;	// IMP=0x00000000000141d5
- (id)initWithProtoPayload:(id)arg1;	// IMP=0x0000000000013fbb
- (id)protoPayload;	// IMP=0x0000000000013f42
- (id)initWithPayload:(id)arg1;	// IMP=0x0000000000013dd9
- (id)payloadCopy;	// IMP=0x0000000000013c85
- (id)initWithBoolValue:(_Bool)arg1;	// IMP=0x0000000000013c43

@end
