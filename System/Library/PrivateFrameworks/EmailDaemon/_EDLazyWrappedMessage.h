//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDMessagePersistence;

@interface _EDLazyWrappedMessage
{
    EDMessagePersistence *_messagePersistence;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000016b376
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
- (long long)databaseID;	// IMP=0x000000000016b175
- (id)initWithMessage:(id)arg1 messagePersistence:(id)arg2;	// IMP=0x000000000016b0df

@end

