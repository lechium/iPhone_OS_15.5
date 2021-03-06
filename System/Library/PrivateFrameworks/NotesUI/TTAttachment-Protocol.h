//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/NSObject-Protocol.h>
#import <NotesUI/TTModelAttributeComparable-Protocol.h>

@class ICAttachment, ICInlineAttachment, NSManagedObjectContext, NSString;

@protocol TTAttachment <TTModelAttributeComparable, NSObject>
@property(readonly, copy, nonatomic) NSString *attachmentUTI;
@property(readonly, copy, nonatomic) NSString *attachmentIdentifier;
- (ICInlineAttachment *)inlineAttachmentInContext:(NSManagedObjectContext *)arg1;
- (ICAttachment *)attachmentInContext:(NSManagedObjectContext *)arg1;
@end

