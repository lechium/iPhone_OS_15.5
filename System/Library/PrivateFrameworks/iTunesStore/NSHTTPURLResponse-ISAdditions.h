//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (ISAdditions)
- (long long)itunes_maxExpectedContentLength;	// IMP=0x000000000005410e
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;	// IMP=0x000000000005403c
- (double)itunes_expirationInterval;	// IMP=0x0000000000053fd4
- (double)expirationInterval;	// IMP=0x0000000000053f21
- (id)itunes_expirationDate;	// IMP=0x0000000000053eed
- (id)_dateFromExpires;	// IMP=0x0000000000053eb4
- (_Bool)_getCacheControlMaxAge:(double *)arg1;	// IMP=0x0000000000053d2b
@end
