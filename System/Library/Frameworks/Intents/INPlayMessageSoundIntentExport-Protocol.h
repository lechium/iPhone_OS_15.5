//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol INPlayMessageSoundIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *messageIdentifier;
@property(nonatomic) long long soundType;
- (id)init;
@end

