//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSIconRequest-Protocol.h>

@class NSString;

@interface WBSFaviconRequest <WBSIconRequest>
{
}

@property(readonly, nonatomic) struct CGSize sizeForDrawing;
@property(readonly, nonatomic) _Bool isURLTypedByUser;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) unsigned long long fallbackType;
@property(readonly, nonatomic) struct CGSize iconSize;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
- (id)_initWithURL:(id)arg1 type:(unsigned long long)arg2 iconSize:(struct CGSize)arg3 fallbackType:(unsigned long long)arg4 isURLTypedByUser:(_Bool)arg5;	// IMP=0x0000000000032d81
- (id)initWithURL:(id)arg1 iconSize:(struct CGSize)arg2 fallbackType:(unsigned long long)arg3 isURLTypedByUser:(_Bool)arg4;	// IMP=0x0000000000032d64
- (id)initWithURL:(id)arg1 iconSize:(struct CGSize)arg2 fallbackType:(unsigned long long)arg3;	// IMP=0x0000000000032d47
- (id)initWithDomain:(id)arg1 iconSize:(struct CGSize)arg2 fallbackType:(unsigned long long)arg3;	// IMP=0x0000000000032c68
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;	// IMP=0x0000000000032c5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

