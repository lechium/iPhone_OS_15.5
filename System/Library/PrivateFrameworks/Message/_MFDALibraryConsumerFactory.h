//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFMessageDataConsumerFactory-Protocol.h>

@class MFMailMessageLibrary, MFMessage, NSString;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory>
{
    MFMailMessageLibrary *_library;	// 8 = 0x8
    MFMessage *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d8895
@property(retain, nonatomic) MFMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) MFMailMessageLibrary *library; // @synthesize library=_library;
- (id)dataConsumerForPart:(id)arg1;	// IMP=0x00000000000d878c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
