//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_transaction;

@interface NavdOsTransaction : NSObject
{
    NSObject<OS_os_transaction> *_osTransaction;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002f018
- (void)dealloc;	// IMP=0x001000000002eede
- (void)endTransaction;	// IMP=0x001000000002ed4d
- (id)initWithTransactionName:(const char *)arg1;	// IMP=0x001000000002ec53

@end
