//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification
{
    _Bool _invitationRecordsDidChange;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
}

+ (id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2;	// IMP=0x00000000005aff5a
- (void).cxx_destruct;	// IMP=0x00000000005b024b
- (void)_calculateDiffs;	// IMP=0x00000000005b00da
@property(readonly, nonatomic) PLGenericAlbum *album;
- (id)name;	// IMP=0x00000000005b0041
@property(readonly, nonatomic) _Bool invitationRecordsDidChange;
- (id)userInfo;	// IMP=0x00000000005affc9

@end
