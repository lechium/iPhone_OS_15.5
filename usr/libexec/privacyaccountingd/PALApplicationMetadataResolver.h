//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PALSettings;

@interface PALApplicationMetadataResolver : NSObject
{
    PALSettings *_settings;	// 8 = 0x8
    CDUnknownBlockType _fetchBundleRecord;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000309d
@property(copy, nonatomic) CDUnknownBlockType fetchBundleRecord; // @synthesize fetchBundleRecord=_fetchBundleRecord;
- (id)bundleRecordForApplication:(id)arg1;	// IMP=0x0010000000002e65
- (id)resolveApplicationMetadataForAccess:(id)arg1;	// IMP=0x0010000000002ba4
- (id)initWithSettings:(id)arg1;	// IMP=0x0010000000002b39

@end

