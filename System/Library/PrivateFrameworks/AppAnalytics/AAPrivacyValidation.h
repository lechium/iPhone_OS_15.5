//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet;

@interface AAPrivacyValidation : NSObject
{
    MISSING_TYPE *enabled;	// 8 = 0x8
    MISSING_TYPE *denylistDescriptors;	// 16 = 0x10
}

+ (id)default;	// IMP=0x000000000008b440
- (void).cxx_destruct;	// IMP=0x000000000008b830
- (id)init;	// IMP=0x000000000008b7d0
- (id)withDenylistDescriptors:(id)arg1;	// IMP=0x000000000008b6f0
- (id)withEnabled:(_Bool)arg1;	// IMP=0x000000000008b5f0
@property(nonatomic, readonly) NSSet *denylistDescriptors;
@property(nonatomic, readonly) _Bool enabled; // @synthesize enabled;

@end

