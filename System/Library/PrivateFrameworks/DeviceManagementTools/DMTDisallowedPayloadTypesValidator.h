//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagementTools/DMTConfigurationProfileValidator-Protocol.h>

@class NSSet, NSString;

@interface DMTDisallowedPayloadTypesValidator : NSObject <DMTConfigurationProfileValidator>
{
    NSSet *_disallowedPayloadTypes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004fc6
@property(copy, nonatomic) NSSet *disallowedPayloadTypes; // @synthesize disallowedPayloadTypes=_disallowedPayloadTypes;
- (_Bool)validateProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004ce5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
