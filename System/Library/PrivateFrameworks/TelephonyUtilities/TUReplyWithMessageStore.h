//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TUReplyWithMessageStore : NSObject
{
}

- (void)_handleMessagesStoreChanged;	// IMP=0x0000000000074da2
- (void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000074c60
- (id)cannedRepliesForSending;	// IMP=0x0000000000074c49
- (id)cannedReplyActionSheetOptions;	// IMP=0x0000000000074afa
- (id)cannedReplies;	// IMP=0x0000000000074ae6
- (id)_cannedRepliesForSending:(_Bool)arg1;	// IMP=0x00000000000748d1
- (id)customReplies;	// IMP=0x0000000000074798
- (id)defaultReplies;	// IMP=0x0000000000074784
- (id)_defaultRepliesForSending:(_Bool)arg1;	// IMP=0x0000000000074600
- (int)count;	// IMP=0x00000000000745f5
- (void)dealloc;	// IMP=0x0000000000074500
- (id)init;	// IMP=0x0000000000074479

@end
