/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIView, MKSearchResult, NSString, UICalloutView, <MKAnnotation>, UIImage;



@interface MKAnnotationViewInternal : NSObject 
{
    <MKAnnotation> *annotation;
    UICalloutView *calloutView;
    UIView *leftCalloutAccessoryView;
    UIView *rightCalloutAccessoryView;
    NSString *reuseIdentifier;
    MKSearchResult *searchResult;
    UIImage *image;
    NSUInteger mapType;
    NSUInteger zIndex;
    struct CGPoint { 
        float x; 
        float y; 
    } centerOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } calloutOffset;
    struct { 
        unsigned int disabled : 1; 
        unsigned int selected : 1; 
        unsigned int canShowCallout : 1; 
        unsigned int isHighlighted : 1; 
        unsigned int canDisplayDisclosureInCallout : 1; 
        unsigned int canDisplayPlacemarkInCallout : 1; 
        unsigned int canDisplayStreetViewInCallout : 1; 
    } flags;
}



@end
