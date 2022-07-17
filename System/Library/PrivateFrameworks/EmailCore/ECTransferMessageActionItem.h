//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailCore/ECTransferMessageActionItemBuilder-Protocol.h>
#import <EmailCore/NSCopying-Protocol.h>

@class NSString;
@protocol ECMessage;

@interface ECTransferMessageActionItem : NSObject <ECTransferMessageActionItemBuilder, NSCopying>
{
    NSString *_sourceRemoteID;	// 8 = 0x8
    id <ECMessage> _sourceMessage;	// 16 = 0x10
    id <ECMessage> _destinationMessage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000036b18
@property(retain, nonatomic) id <ECMessage> destinationMessage; // @synthesize destinationMessage=_destinationMessage;
@property(retain, nonatomic) id <ECMessage> sourceMessage; // @synthesize sourceMessage=_sourceMessage;
@property(copy, nonatomic) NSString *sourceRemoteID; // @synthesize sourceRemoteID=_sourceRemoteID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000036abe
- (id)init;	// IMP=0x0000000000036a6f
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000000000369e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
