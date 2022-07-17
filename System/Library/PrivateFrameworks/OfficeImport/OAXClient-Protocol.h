//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CXNamespace, NSString, OADDrawable, OADGroup, OADHyperlink, OADImage, OADParagraph, OADShape, OADTextField, OAXDrawingState, OAXTextFieldIdentity, OCPPackageRelationship, ODDDiagram;

@protocol OAXClient
+ (_Bool)sourceDrawableIsTopLevel:(struct _xmlNode *)arg1;
- (OADDrawable *)readGraphicData:(struct _xmlNode *)arg1 state:(OAXDrawingState *)arg2;
- (OADImage *)readOle:(struct _xmlNode *)arg1 state:(OAXDrawingState *)arg2;
- (void)postprocessHyperlink:(OADHyperlink *)arg1 relationship:(OCPPackageRelationship *)arg2 state:(OAXDrawingState *)arg3;
- (OADTextField *)readClientTextField:(struct _xmlNode *)arg1 identity:(OAXTextFieldIdentity *)arg2 paragraph:(OADParagraph *)arg3 state:(OAXDrawingState *)arg4;
- (void)readBlipExtWithURI:(NSString *)arg1 fromNode:(struct _xmlNode *)arg2 toDrawable:(OADDrawable *)arg3 state:(OAXDrawingState *)arg4;
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg1 toDrawable:(OADDrawable *)arg2 state:(OAXDrawingState *)arg3;
- (void)readClientDataFromGraphicDataNode:(struct _xmlNode *)arg1 toDiagram:(ODDDiagram *)arg2 state:(OAXDrawingState *)arg3;
- (void)readClientDataFromGroupNode:(struct _xmlNode *)arg1 toGroup:(OADGroup *)arg2 state:(OAXDrawingState *)arg3;
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg1 toImage:(OADImage *)arg2 state:(OAXDrawingState *)arg3;
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg1 toShape:(OADShape *)arg2 state:(OAXDrawingState *)arg3;
- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(OADDrawable *)arg2 state:(OAXDrawingState *)arg3;
- (struct _xmlNode *)genericNonVisualPropertiesNodeForDrawableNode:(struct _xmlNode *)arg1 inNamespace:(CXNamespace *)arg2 state:(OAXDrawingState *)arg3;
- (OADDrawable *)readClientDrawableFromXmlNode:(struct _xmlNode *)arg1 state:(OAXDrawingState *)arg2;

@optional
- (_Bool)chartAutoStrokeIsHollow;
- (_Bool)chartAutoFillIsHollow;
@end
