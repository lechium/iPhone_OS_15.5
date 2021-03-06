//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICLegacyContentUtilities : NSObject
{
}

+ (id)newNoteBasedOnModernNote:(id)arg1 inFolder:(id)arg2 context:(id)arg3;	// IMP=0x000000000000702d
+ (id)createAttachmentFromWebResource:(id)arg1 inContext:(id)arg2;	// IMP=0x0000000000006e32
+ (id)createAttachmentWithContentID:(id)arg1 mimeType:(id)arg2 data:(id)arg3 filename:(id)arg4 inContext:(id)arg5;	// IMP=0x0000000000006c8b
+ (id)generateContentID;	// IMP=0x0000000000006c03
+ (id)suggestedFilenameForURL:(id)arg1 mimeType:(id)arg2;	// IMP=0x0000000000006b64
+ (id)contentStringFromWebArchive:(id)arg1;	// IMP=0x0000000000006a5e

@end

