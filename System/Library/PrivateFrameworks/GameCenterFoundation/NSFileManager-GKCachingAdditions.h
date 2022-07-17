//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (GKCachingAdditions)
- (void)_gkSetExpirationInterval:(double)arg1 ofFileAtPath:(id)arg2;	// IMP=0x00000000000038e2
- (double)_gkExpirationIntervalOfFileAtPath:(id)arg1;	// IMP=0x000000000000388a
- (void)_gkRemoveXattrNamed:(id)arg1 path:(id)arg2;	// IMP=0x0000000000003812
- (void)_gkWriteXattrBytes:(void *)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4;	// IMP=0x000000000000377f
- (long long)_gkReadXattrBytes:(void *)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4;	// IMP=0x00000000000034da
@end
