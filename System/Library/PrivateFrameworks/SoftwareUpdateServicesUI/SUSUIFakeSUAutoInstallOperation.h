//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServices/SUAutoInstallOperation.h>

@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation
{
    _Bool _cancelled;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000074f0
- (_Bool)isCanceled;	// IMP=0x00000000000074c0
- (void)cancel;	// IMP=0x00000000000074a0
- (_Bool)isExpired;	// IMP=0x0000000000007480
- (id)id;	// IMP=0x0000000000007400
- (id)forecast;	// IMP=0x00000000000073d0

@end
