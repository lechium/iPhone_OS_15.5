//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pasteboard/NSCopying-Protocol.h>
#import <Pasteboard/NSSecureCoding-Protocol.h>

@interface PBPasteButtonTag : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001fab
+ (id)contextMenuPasteButtonTagWithVariantIndex:(unsigned long long)arg1 size:(struct CGSize)arg2 titleOrigin:(struct CGPoint)arg3;	// IMP=0x0000000000001f4a
+ (id)undoInteractionHUDTextPasteButtonTagWithMinWidth:(double)arg1;	// IMP=0x0000000000001f0f
+ (id)undoInteractionHUDIconPasteButtonTagWithMinWidth:(double)arg1;	// IMP=0x0000000000001ed4
+ (id)systemInputAssistantPasteButtonTagWithSite:(long long)arg1;	// IMP=0x0000000000001e9e
+ (id)systemInputAssistantPasteButtonTag;	// IMP=0x0000000000001e73
+ (id)calloutBarPasteButtonTagWithVariantIndex:(unsigned long long)arg1 size:(struct CGSize)arg2 titleOrigin:(struct CGPoint)arg3 contentScaleLevel:(unsigned long long)arg4;	// IMP=0x0000000000001e00
+ (id)calloutBarPasteButtonTagWithVariantIndex:(unsigned long long)arg1 size:(struct CGSize)arg2 titleOrigin:(struct CGPoint)arg3 titleWidth:(double)arg4 contentScaleLevel:(unsigned long long)arg5;	// IMP=0x0000000000001d8b
- (id)_acceptCalloutBarPasteButtonTagVisit:(CDUnknownBlockType)arg1 systemInputAssistantPasteButtonTagVisit:(CDUnknownBlockType)arg2 undoInteractionHUDIconPasteButtonTagVisit:(CDUnknownBlockType)arg3 undoInteractionHUDTextPasteButtonTagVisit:(CDUnknownBlockType)arg4 contextMenuPasteButtonTagVisit:(CDUnknownBlockType)arg5;	// IMP=0x0000000000002011
- (id)resolvedStyleForStyle:(id)arg1;	// IMP=0x0000000000001ffb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001ff5
- (unsigned long long)grade;	// IMP=0x0000000000001fed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001fe2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001fb3

@end

