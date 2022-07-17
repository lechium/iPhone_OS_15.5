//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSOTRController, NSString;

@interface IDSOTREncrypter : NSObject
{
    IDSOTRController *_OTRController;	// 8 = 0x8
    NSString *_OTRToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000476b20
@property(readonly, nonatomic) NSString *OTRToken; // @synthesize OTRToken=_OTRToken;
@property(readonly, nonatomic) IDSOTRController *OTRController; // @synthesize OTRController=_OTRController;
- (id)decryptData:(id)arg1 onQueue:(id)arg2 error:(long long *)arg3;	// IMP=0x0010000000475e00
- (id)encryptData:(id)arg1 onQueue:(id)arg2 error:(long long *)arg3;	// IMP=0x00100000004750a0
- (id)initWithOTRController:(id)arg1 OTRToken:(id)arg2;	// IMP=0x0010000000474fb0

@end
