//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject
{
    NSString *_messageID;	// 8 = 0x8
    NSString *_attachmentName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000013564
@property(copy, nonatomic) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (id)description;	// IMP=0x000000000001345e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013278
- (unsigned long long)hash;	// IMP=0x00000000000131c7
- (id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2;	// IMP=0x00000000000130ec

@end
