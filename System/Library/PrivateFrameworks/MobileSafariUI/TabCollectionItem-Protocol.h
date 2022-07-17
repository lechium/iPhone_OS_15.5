//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol TabCollectionItem <NSObject>
@property(nonatomic) long long dragState;
@property(readonly, nonatomic) _Bool isPlaceholder;
@property(readonly, nonatomic) NSUUID *UUID;
@property(readonly, nonatomic) unsigned long long mediaStateIcon;
@property(readonly, copy, nonatomic) NSString *title;
@end
