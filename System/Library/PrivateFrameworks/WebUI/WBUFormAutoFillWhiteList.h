//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface WBUFormAutoFillWhiteList : NSObject
{
    NSCache *_cache;	// 8 = 0x8
}

+ (id)sharedAutoFillWhiteList;	// IMP=0x000000000001330e
- (void).cxx_destruct;	// IMP=0x00000000000135d0
- (_Bool)allowsURL:(id)arg1;	// IMP=0x00000000000134ca
- (void)_whiteListSettingsChanged:(id)arg1;	// IMP=0x00000000000134b4
- (void)dealloc;	// IMP=0x000000000001343f
- (id)init;	// IMP=0x0000000000013363

@end
