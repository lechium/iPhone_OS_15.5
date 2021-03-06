//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNTask.h>

@class NSArray;
@protocol CNAvatarCacheChangeListenerDelegate;

@interface CNAvatarChangeHistoryReportingTask : CNTask
{
    NSArray *_identifiers;	// 24 = 0x18
    id <CNAvatarCacheChangeListenerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000415f8
@property(readonly, nonatomic) id <CNAvatarCacheChangeListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (id)run:(id *)arg1;	// IMP=0x00000000000414fc
- (id)initWithIdentifiers:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000041438

@end

