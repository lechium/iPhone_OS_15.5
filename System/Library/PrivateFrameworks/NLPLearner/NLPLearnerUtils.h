//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NLPLearnerUtils : NSObject
{
}

+ (_Bool)checkVietnameseCharactersInText:(id)arg1;	// IMP=0x000000000000203c
+ (id)languageForText:(id)arg1 checkVietnamese:(_Bool)arg2;	// IMP=0x0000000000001f90
+ (id)languageForText:(id)arg1;	// IMP=0x0000000000001f72
+ (unsigned long long)sourceForEvent:(id)arg1;	// IMP=0x0000000000001e3e
+ (id)messageContentForEvent:(id)arg1 andLanguage:(id)arg2;	// IMP=0x0000000000001cf7
+ (id)messageContentForEvent:(id)arg1;	// IMP=0x0000000000001b59
+ (void)removeTemporaryFile:(id)arg1;	// IMP=0x0000000000001a94
+ (id)getAttachmentURLByName:(id)arg1 attachments:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000001637
+ (id)getAttachmentURLByName:(id)arg1 inDirectory:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000001561
+ (_Bool)isInternalInstall;	// IMP=0x000000000000151e
+ (void)initialize;	// IMP=0x00000000000014d0

@end
