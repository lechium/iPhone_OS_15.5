//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface CPLDiffTracker : NSObject
{
    NSMutableSet *_differingProperties;	// 8 = 0x8
    _Bool _shouldCompareAllProperties;	// 16 = 0x10
    _Bool _objectsAreTotallyDifferent;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x00000000000c9048
@property(readonly, nonatomic) NSSet *differingProperties; // @synthesize differingProperties=_differingProperties;
@property(readonly, nonatomic) _Bool objectsAreTotallyDifferent; // @synthesize objectsAreTotallyDifferent=_objectsAreTotallyDifferent;
@property(nonatomic) _Bool shouldCompareAllProperties; // @synthesize shouldCompareAllProperties=_shouldCompareAllProperties;
- (id)redactedDescription;	// IMP=0x00000000000c8f5a
- (id)description;	// IMP=0x00000000000c8f48
- (_Bool)areObjectsDifferentOnProperty:(id)arg1;	// IMP=0x00000000000c8f28
- (void)noteObjectsDifferOnProperty:(id)arg1;	// IMP=0x00000000000c8ece
- (void)noteObjectAreTotallyDifferent;	// IMP=0x00000000000c8ec4

@end

