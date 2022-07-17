//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDLocalActionPersistence.h>

@class MFMailMessageLibrary;

@interface MFLocalActionPersistence_iOS : EDLocalActionPersistence
{
    MFMailMessageLibrary *_library;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ecb9a
@property(nonatomic) __weak MFMailMessageLibrary *library; // @synthesize library=_library;
- (void)handledFailedCopyForMessages:(id)arg1;	// IMP=0x00000000000ecb67
- (id)labelNameForLabelID:(long long)arg1;	// IMP=0x00000000000ecb34
- (long long)mailboxDatabaseIDForURL:(id)arg1;	// IMP=0x00000000000eca6b
- (id)mailboxURLForDatabaseID:(long long)arg1;	// IMP=0x00000000000ec9bc
- (_Bool)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2;	// IMP=0x00000000000ec8e7
- (id)messageForDatabaseID:(long long)arg1;	// IMP=0x00000000000ec86f
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000000ec800
- (id)initWithLibrary:(id)arg1 database:(id)arg2;	// IMP=0x00000000000ec6dc
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;	// IMP=0x00000000000ec657

@end
