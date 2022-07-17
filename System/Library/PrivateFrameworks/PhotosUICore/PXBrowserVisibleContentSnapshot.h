//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXBrowserVisibleContentSnapshot-Protocol.h>

@class NSArray, NSDateInterval, NSString;

@interface PXBrowserVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot>
{
    unsigned long long _dateIntervalGranularity;	// 8 = 0x8
    NSArray *_locationNames;	// 16 = 0x10
}

+ (id)snapshotWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3 dateType:(unsigned long long)arg4;	// IMP=0x0000000000a07feb
+ (id)snapshotWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3;	// IMP=0x0000000000a07fd6
- (void).cxx_destruct;	// IMP=0x0000000000a07fc6
@property(readonly, nonatomic) NSArray *locationNames; // @synthesize locationNames=_locationNames;
@property(readonly, nonatomic) unsigned long long dateIntervalGranularity; // @synthesize dateIntervalGranularity=_dateIntervalGranularity;
@property(readonly, nonatomic) NSDateInterval *dateInterval;
- (id)init;	// IMP=0x0000000000a07ef4
- (id)initWithDateIntervalGranularity:(unsigned long long)arg1;	// IMP=0x0000000000a07eb7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedPlaceholderText;
@property(readonly) Class superclass;

@end
