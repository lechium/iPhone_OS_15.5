//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification
{
    NSDictionary *_userInfo;	// 8 = 0x8
}

+ (id)notificationWithAsset:(id)arg1 snapshot:(id)arg2;	// IMP=0x00000000004916a6
- (void).cxx_destruct;	// IMP=0x0000000000491a14
- (id)_contentRelationshipName;	// IMP=0x0000000000491a07
@property(readonly, nonatomic) PLManagedAsset *asset;
- (id)description;	// IMP=0x00000000004918f5
- (id)userInfo;	// IMP=0x0000000000491734
- (id)name;	// IMP=0x0000000000491715

@end
