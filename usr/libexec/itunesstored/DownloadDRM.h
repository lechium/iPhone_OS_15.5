//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SinfsArray;

@interface DownloadDRM : NSObject
{
    NSArray *_sinfs;	// 8 = 0x8
}

- (id)_sinfsArrayWithDataKey:(id)arg1;	// IMP=0x0020000000091ad7
@property(readonly) SinfsArray *sinfsArray;
@property(readonly) NSArray *sinfs; // @synthesize sinfs=_sinfs;
- (id)sinfForIdentifier:(long long)arg1;	// IMP=0x0010000000091971
@property(readonly) SinfsArray *pinfsArray;
@property(readonly, getter=isDRMFree) _Bool DRMFree;
- (id)firstDataForSinfDataKey:(id)arg1;	// IMP=0x001000000009181c
- (void)dealloc;	// IMP=0x00100000000917e1
- (id)initWithSinfArray:(id)arg1;	// IMP=0x0010000000091622
- (id)init;	// IMP=0x001000000009160e

@end

