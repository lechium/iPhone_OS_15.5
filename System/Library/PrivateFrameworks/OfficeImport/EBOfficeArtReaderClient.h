//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/OABReaderClient-Protocol.h>

__attribute__((visibility("hidden")))
@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>
{
}

+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;	// IMP=0x00000000003a0432
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;	// IMP=0x00000000003a0427
+ (_Bool)xmlEquivalentOfDrawableCanBeUsed;	// IMP=0x00000000003a041f
+ (_Bool)tablesAreAllowed;	// IMP=0x0000000000190197
+ (_Bool)escherIsFullySupported;	// IMP=0x000000000013e0af
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;	// IMP=0x00000000003a0419
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;	// IMP=0x00000000001901ab
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;	// IMP=0x0000000000143120
+ (void)readEshClientAnchor:(const void *)arg1 targetClientData:(id)arg2 state:(id)arg3;	// IMP=0x00000000001433e9
+ (void)setAutoInsetForShape:(void *)arg1;	// IMP=0x00000000001479f6

@end
