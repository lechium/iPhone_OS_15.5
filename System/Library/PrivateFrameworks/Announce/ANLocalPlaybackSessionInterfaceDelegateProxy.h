//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/ANLocalPlaybackSessionServiceInterfaceDelegate-Protocol.h>

@class NSString;
@protocol ANLocalPlaybackSessionServiceInterfaceDelegate;

@interface ANLocalPlaybackSessionInterfaceDelegateProxy : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate>
{
    id <ANLocalPlaybackSessionServiceInterfaceDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000008dbd
@property(nonatomic) __weak id <ANLocalPlaybackSessionServiceInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveAnnouncement:(id)arg1 forGroupID:(id)arg2;	// IMP=0x0000000000008d10
- (void)announcementsStateUpdate:(unsigned long long)arg1;	// IMP=0x0000000000008cc4
- (void)announcementsWillStartPlaying:(unsigned long long)arg1;	// IMP=0x0000000000008c78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

