//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (NAErrors)
+ (id)na_genericError;	// IMP=0x0000000000002590
+ (id)na_cancelledError;	// IMP=0x0000000000002565
+ (id)na_timeoutError;	// IMP=0x000000000000254e
+ (id)na_errorWithCode:(unsigned long long)arg1;	// IMP=0x0000000000002528
- (_Bool)na_isCancelledError;	// IMP=0x0000000000002617
- (_Bool)na_isTimeoutError;	// IMP=0x00000000000025a7
@end
