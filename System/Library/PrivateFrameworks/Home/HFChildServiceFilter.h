//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface HFChildServiceFilter : NSObject
{
    NSSet *_childServiceTypes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000de293
@property(readonly, copy, nonatomic) NSSet *childServiceTypes; // @synthesize childServiceTypes=_childServiceTypes;
- (id)filteredChildServicesForParentService:(id)arg1;	// IMP=0x00000000000de11a
- (id)initWithChildServiceTypes:(id)arg1;	// IMP=0x00000000000de0a7

@end
