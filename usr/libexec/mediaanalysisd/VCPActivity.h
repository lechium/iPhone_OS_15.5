//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPActivity : NSObject
{
    long long _intervalSec;	// 8 = 0x8
}

+ (_Bool)runRemote;	// IMP=0x00400000000074c6
+ (_Bool)ignoreCancellation;	// IMP=0x00100000000074be
+ (const char *)identifier;	// IMP=0x001000000000744f
+ (void)notImplementedException:(id)arg1;	// IMP=0x00100000000073a1
@property long long intervalSec; // @synthesize intervalSec=_intervalSec;
- (void)registerActivity;	// IMP=0x00100000000074ce
- (void)execute:(id)arg1;	// IMP=0x001000000000749d
- (_Bool)oneShot;	// IMP=0x0010000000007495
- (id)criteria;	// IMP=0x0010000000007472

@end

