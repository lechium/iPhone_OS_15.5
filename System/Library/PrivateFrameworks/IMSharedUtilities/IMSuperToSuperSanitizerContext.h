//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSString;

@interface IMSuperToSuperSanitizerContext
{
    NSMutableAttributedString *_content;	// 16 = 0x10
    NSMutableArray *_attachments;	// 24 = 0x18
    NSString *_backgroundColor;	// 32 = 0x20
    NSString *_foregroundColor;	// 40 = 0x28
    unsigned long long _offset;	// 48 = 0x30
    long long _baseWritingDirection;	// 56 = 0x38
    _Bool _extractAttachments;	// 64 = 0x40
    _Bool _hadBaseWritingDirectionAttribute;	// 65 = 0x41
}

@property(readonly, retain) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, retain) NSAttributedString *sanitizedContent; // @synthesize sanitizedContent=_content;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;	// IMP=0x0000000000066fe9
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;	// IMP=0x0000000000066d27
- (void)parserDidEnd:(id)arg1;	// IMP=0x0000000000066c2f
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;	// IMP=0x0000000000066aa6
- (id)resultsForLogging;	// IMP=0x0000000000066a82
- (id)name;	// IMP=0x0000000000066a75
- (void)dealloc;	// IMP=0x0000000000066a01
- (id)initWithAttributedString:(id)arg1 extractAttachments:(_Bool)arg2;	// IMP=0x0000000000066993

@end
