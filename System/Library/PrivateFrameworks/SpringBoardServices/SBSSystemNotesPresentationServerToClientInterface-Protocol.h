//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class NSError, NSNumber, SBSSystemNotesPresentationConfiguration;

@protocol SBSSystemNotesPresentationServerToClientInterface <NSObject>
- (oneway void)configuration:(SBSSystemNotesPresentationConfiguration *)arg1 didInvalidateWithError:(NSError *)arg2;
- (oneway void)configuration:(SBSSystemNotesPresentationConfiguration *)arg1 didChangeToPresentationMode:(NSNumber *)arg2;
@end

