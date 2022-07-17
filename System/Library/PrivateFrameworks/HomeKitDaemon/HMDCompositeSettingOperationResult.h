//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCompositeSetting, HMDCompositeSettingMetadata, NSError, NSString;

@interface HMDCompositeSettingOperationResult : HMFObject
{
    HMDCompositeSettingMetadata *_metadata;	// 8 = 0x8
    HMDCompositeSetting *_setting;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSString *_keyPath;	// 32 = 0x20
}

+ (id)frameWorkFetchResultsWithOperationResults:(id)arg1;	// IMP=0x00000000002a0168
- (void).cxx_destruct;	// IMP=0x00000000002a0115
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy) NSError *error; // @synthesize error=_error;
@property(readonly) HMDCompositeSetting *setting; // @synthesize setting=_setting;
@property(readonly) HMDCompositeSettingMetadata *metadata; // @synthesize metadata=_metadata;
- (id)attributeDescriptions;	// IMP=0x000000000029fef5
- (id)initWithKeyPath:(id)arg1 setting:(id)arg2 metadata:(id)arg3 error:(id)arg4;	// IMP=0x000000000029fe09

@end
