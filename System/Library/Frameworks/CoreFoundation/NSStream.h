//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;
@protocol NSStreamDelegate;

@interface NSStream : NSObject
{
}


// Remaining properties
@property id <NSStreamDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSError *streamError; // @dynamic streamError;
@property(readonly) unsigned long long streamStatus; // @dynamic streamStatus;
@end

