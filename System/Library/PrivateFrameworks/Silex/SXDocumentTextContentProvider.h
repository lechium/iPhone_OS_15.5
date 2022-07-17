//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXTextContentProvider-Protocol.h>

@class NSString, SXDocument;

@interface SXDocumentTextContentProvider : NSObject <SXTextContentProvider>
{
    SXDocument *_document;	// 8 = 0x8
}

+ (id)sharedQueue;	// IMP=0x00000000000b3311
- (void).cxx_destruct;	// IMP=0x00000000000b339e
@property(readonly, nonatomic) SXDocument *document; // @synthesize document=_document;
- (_Bool)contentRelevance:(unsigned long long)arg1 isValidForType:(unsigned long long)arg2;	// IMP=0x00000000000b32fb
- (_Bool)classification:(id)arg1 isValidForType:(unsigned long long)arg2;	// IMP=0x00000000000b32cf
- (id)textContentForComponent:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x00000000000b3159
- (id)textContentForComponents:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x00000000000b2f31
- (void)textContentForType:(unsigned long long)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b2c1b
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000b2bb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
