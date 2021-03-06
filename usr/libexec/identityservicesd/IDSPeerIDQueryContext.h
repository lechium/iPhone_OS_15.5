//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSPeerIDQueryContext : NSObject
{
    _Bool _forSending;	// 8 = 0x8
    _Bool _forRefresh;	// 9 = 0x9
    _Bool _forMessaging;	// 10 = 0xa
    _Bool _resultExpected;	// 11 = 0xb
}

@property(readonly, nonatomic) _Bool resultExpected; // @synthesize resultExpected=_resultExpected;
@property(readonly, nonatomic) _Bool forMessaging; // @synthesize forMessaging=_forMessaging;
@property(readonly, nonatomic) _Bool forRefresh; // @synthesize forRefresh=_forRefresh;
@property(readonly, nonatomic) _Bool forSending; // @synthesize forSending=_forSending;
- (id)initWithSending:(_Bool)arg1 refresh:(_Bool)arg2 messaging:(_Bool)arg3 resultExpected:(_Bool)arg4;	// IMP=0x00100000006904a0

@end

