//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMDMessageActiveDevice : NSObject
{
    _Bool _hasReceivedReadReceipt;	// 8 = 0x8
    NSString *_idsDestination;	// 16 = 0x10
    NSDate *_latestActiveDate;	// 24 = 0x18
    NSDate *_latestReadReceipt;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001693c
@property(retain, nonatomic) NSDate *latestReadReceipt; // @synthesize latestReadReceipt=_latestReadReceipt;
@property(nonatomic) _Bool hasReceivedReadReceipt; // @synthesize hasReceivedReadReceipt=_hasReceivedReadReceipt;
@property(retain, nonatomic) NSDate *latestActiveDate; // @synthesize latestActiveDate=_latestActiveDate;
@property(retain, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
- (id)description;	// IMP=0x0000000000016844
- (_Bool)shouldDisplayRemoteDecryptionFailure;	// IMP=0x00000000000167e0
- (_Bool)shouldDisplayAttachmentDownloadFailure;	// IMP=0x000000000001677c
- (_Bool)shouldSendTypingIndicator;	// IMP=0x0000000000016709
- (_Bool)_hasReceivedReadReceiptRecently;	// IMP=0x000000000001668f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000165f7
- (id)initWithIDSDestination:(id)arg1 latestDate:(id)arg2 latestReadReceiptDate:(id)arg3 hasReceivedReadReceipt:(_Bool)arg4;	// IMP=0x00000000000164f3

@end
