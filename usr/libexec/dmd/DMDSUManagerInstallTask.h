//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DMDSUManagerInstallTask : NSObject
{
}

+ (id)productKeyOrDefaultFromStatus:(id)arg1;	// IMP=0x002000000007b283
+ (id)productKeyFromStatus:(id)arg1;	// IMP=0x001000000007b1f4
+ (id)_dmfStatusErrorFromSUStatusError:(id)arg1;	// IMP=0x001000000007b127
+ (id)defaultProductKey;	// IMP=0x001000000007b11a
+ (id)sharedInstallTask;	// IMP=0x001000000007b0c5
- (id)currentStatusWithError:(id *)arg1;	// IMP=0x004000000007b2ec
- (_Bool)startInstallWithError:(id *)arg1;	// IMP=0x001000000007b2e4
- (_Bool)startDownloadWithError:(id *)arg1;	// IMP=0x001000000007b2dc
- (id)availableUpdateWithVersion:(id)arg1 useDelay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000007b2d4
- (_Bool)removeUpdateWithError:(id *)arg1;	// IMP=0x001000000007b2cc

@end

