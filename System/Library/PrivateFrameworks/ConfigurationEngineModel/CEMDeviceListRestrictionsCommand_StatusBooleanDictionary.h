//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionary
{
    NSDictionary *_statusANY;	// 16 = 0x10
}

+ (id)buildRequiredOnly;	// IMP=0x0000000000045b33
+ (id)build;	// IMP=0x0000000000045b1a
+ (id)allowedStatusKeys;	// IMP=0x0000000000045afa
- (void).cxx_destruct;	// IMP=0x00000000000460c0
@property(copy, nonatomic) NSDictionary *statusANY; // @synthesize statusANY=_statusANY;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046039
- (id)serializePayload;	// IMP=0x0000000000045e08
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045b4c

@end
