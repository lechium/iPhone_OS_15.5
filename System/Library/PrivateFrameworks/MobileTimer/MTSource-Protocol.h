//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSString;

@protocol MTSource <NSObject>
- (NSString *)sourceIdentifier;

@optional
- (_Bool)dontNotify;
- (_Bool)donatesIntent;
- (_Bool)isFromOtherDevice;
@end

