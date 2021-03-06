//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;
@protocol BKEnrollOperationDelegate;

@interface BKEnrollOperation
{
    unsigned int _userID;	// 40 = 0x28
    NSData *_credentialSet;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000005178
@property(copy, nonatomic) NSData *credentialSet; // @synthesize credentialSet=_credentialSet;
@property(nonatomic) unsigned int userID; // @synthesize userID=_userID;

// Remaining properties
@property(nonatomic) __weak id <BKEnrollOperationDelegate> delegate; // @dynamic delegate;

@end

