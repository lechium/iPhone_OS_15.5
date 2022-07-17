//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItem.h>

@class HMHome, NAFuture;

@interface HUSoftwareUpdateFetchItem : HFItem
{
    HMHome *_home;	// 8 = 0x8
    NAFuture *_softwareUpdateFetchFuture;	// 16 = 0x10
}

+ (id)_dateFormatter;	// IMP=0x000000000029c732
- (void).cxx_destruct;	// IMP=0x000000000029cd46
@property(retain, nonatomic) NAFuture *softwareUpdateFetchFuture; // @synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x000000000029c91c
- (id)initWithHome:(id)arg1 softwareUpdateFetchFuture:(id)arg2;	// IMP=0x000000000029c87a
- (id)init;	// IMP=0x000000000029c7c5

@end
