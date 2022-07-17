//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, NSString, PKSearchResults;

@protocol PKSearchServiceObserver <NSObject>

@optional
- (void)invalidateSearchResults;
- (void)searchDidCompleteWithError:(NSError *)arg1 results:(PKSearchResults *)arg2 forIdentifier:(NSString *)arg3;
@end
