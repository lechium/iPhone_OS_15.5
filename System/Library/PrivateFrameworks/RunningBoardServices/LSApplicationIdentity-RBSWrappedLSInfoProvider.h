//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSApplicationIdentity.h>

#import <RunningBoardServices/RBSWrappedLSInfoProvider-Protocol.h>

@class NSString;

@interface LSApplicationIdentity (RBSWrappedLSInfoProvider) <RBSWrappedLSInfoProvider>
- (id)fetchWrappedInfoWithError:(out id *)arg1;	// IMP=0x000000000002ddb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
